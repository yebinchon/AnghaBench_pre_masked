
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_irq {int size; struct device_node* controller; int specifier; } ;
struct device_node {char* full_name; } ;
typedef int phandle ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int const*,int) ;
 struct device_node* FUNC_2 (int ) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int* FUNC_4 (struct device_node*,char*,int*) ;
 struct device_node* VAR_2 ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int VAR_3 ;
 struct device_node* FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;

int FUNC_8(struct device_node *VAR_4, const u32 *VAR_5, u32 VAR_6,
  const u32 *VAR_7, struct of_irq *VAR_8)
{
 struct device_node *VAR_9, *VAR_10, *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 const u32 *VAR_13, *VAR_14, *VAR_15;
 u32 VAR_16 = 1, VAR_17, VAR_18 = 0, VAR_19 = 0;
 int VAR_20, VAR_21, VAR_22;

 FUNC_0("of_irq_map_raw: par=%s,intspec=[0x%08x 0x%08x...],ointsize=%d\n",
     VAR_4->full_name, VAR_5[0], VAR_5[1], VAR_6);

 VAR_9 = FUNC_6(VAR_4);





 do {
  VAR_13 = FUNC_4(VAR_9, "#interrupt-cells", ((void*)0));
  if (VAR_13 != ((void*)0)) {
   VAR_16 = *VAR_13;
   break;
  }
  VAR_10 = VAR_9;
  VAR_9 = FUNC_5(VAR_9);
  FUNC_7(VAR_10);
 } while (VAR_9);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(" -> no parent found !\n");
  goto fail;
 }

 FUNC_0("of_irq_map_raw: ipar=%s, size=%d\n", VAR_9->full_name, VAR_16);

 if (VAR_6 != VAR_16)
  return -VAR_0;




 VAR_11 = FUNC_6(VAR_9);
 do {
  VAR_13 = FUNC_4(VAR_11, "#address-cells", ((void*)0));
  VAR_10 = FUNC_3(VAR_11);
  FUNC_7(VAR_11);
  VAR_11 = VAR_10;
 } while(VAR_11 && VAR_13 == ((void*)0));
 FUNC_7(VAR_11);
 VAR_11 = ((void*)0);
 VAR_17 = (VAR_13 == ((void*)0)) ? 2 : *VAR_13;

 FUNC_0(" -> addrsize=%d\n", VAR_17);


 while (VAR_9 != ((void*)0)) {



  if (FUNC_4(VAR_9, "interrupt-controller", ((void*)0)) !=
    ((void*)0)) {
   FUNC_0(" -> got it !\n");
   FUNC_1(VAR_8->specifier, VAR_5,
          VAR_16 * sizeof(u32));
   VAR_8->size = VAR_16;
   VAR_8->controller = VAR_9;
   FUNC_7(VAR_11);
   return 0;
  }


  VAR_14 = FUNC_4(VAR_9, "interrupt-map", &VAR_20);

  if (VAR_14 == ((void*)0)) {
   FUNC_0(" -> no map, getting parent\n");
   VAR_12 = FUNC_5(VAR_9);
   goto skiplevel;
  }
  VAR_20 /= sizeof(u32);


  VAR_15 = FUNC_4(VAR_9, "interrupt-map-mask", ((void*)0));





  if (VAR_7 == ((void*)0) && VAR_17 != 0) {
   FUNC_0(" -> no reg passed in when needed !\n");
   goto fail;
  }


  VAR_21 = 0;
  while (VAR_20 > (VAR_17 + VAR_16 + 1) && !VAR_21) {

   VAR_21 = 1;
   for (VAR_22 = 0; VAR_22 < VAR_17 && VAR_21; ++VAR_22) {
    u32 VAR_23 = VAR_15 ? VAR_15[VAR_22] : 0xffffffffu;
    VAR_21 = ((VAR_7[VAR_22] ^ VAR_14[VAR_22]) & VAR_23) == 0;
   }
   for (; VAR_22 < (VAR_17 + VAR_16) && VAR_21; ++VAR_22) {
    u32 VAR_24 = VAR_15 ? VAR_15[VAR_22] : 0xffffffffu;
    VAR_21 =
       ((VAR_5[VAR_22-VAR_17] ^ VAR_14[VAR_22]) & VAR_24) == 0;
   }
   VAR_14 += VAR_17 + VAR_16;
   VAR_20 -= VAR_17 + VAR_16;

   FUNC_0(" -> match=%d (imaplen=%d)\n", VAR_21, VAR_20);


   if (VAR_3 & VAR_1)
    VAR_12 = FUNC_6(VAR_2);
   else
    VAR_12 = FUNC_2((phandle)*VAR_14);
   VAR_14++;
   --VAR_20;


   if (VAR_12 == ((void*)0)) {
    FUNC_0(" -> imap parent not found !\n");
    goto fail;
   }




   VAR_13 = FUNC_4(VAR_12, "#interrupt-cells", ((void*)0));
   if (VAR_13 == ((void*)0)) {
    FUNC_0(" -> parent lacks #interrupt-cells !\n");
    goto fail;
   }
   VAR_18 = *VAR_13;
   VAR_13 = FUNC_4(VAR_12, "#address-cells", ((void*)0));
   VAR_19 = (VAR_13 == ((void*)0)) ? 0 : *VAR_13;

   FUNC_0(" -> newintsize=%d, newaddrsize=%d\n",
       VAR_18, VAR_19);


   if (VAR_20 < (VAR_19 + VAR_18))
    goto fail;

   VAR_14 += VAR_19 + VAR_18;
   VAR_20 -= VAR_19 + VAR_18;

   FUNC_0(" -> imaplen=%d\n", VAR_20);
  }
  if (!VAR_21)
   goto fail;

  FUNC_7(VAR_11);
  VAR_11 = FUNC_6(VAR_12);
  VAR_17 = VAR_19;
  VAR_16 = VAR_18;
  VAR_5 = VAR_14 - VAR_16;
  VAR_7 = VAR_5 - VAR_17;

 skiplevel:

  FUNC_0(" -> new parent: %s\n", VAR_12 ? VAR_12->full_name : "<>");
  FUNC_7(VAR_9);
  VAR_9 = VAR_12;
  VAR_12 = ((void*)0);
 }
 fail:
 FUNC_7(VAR_9);
 FUNC_7(VAR_11);
 FUNC_7(VAR_12);

 return -VAR_0;
}
