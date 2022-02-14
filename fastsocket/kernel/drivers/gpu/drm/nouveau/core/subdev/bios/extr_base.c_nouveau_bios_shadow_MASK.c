
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_bios {char* data; int size; } ;
struct methods {char* member_0; int member_2; char* desc; int score; int rw; char* data; int size; int (* shadow ) (struct nouveau_bios*) ;int * member_5; int member_4; int member_3; int member_1; } ;
struct firmware {int size; int data; } ;
struct TYPE_4__ {TYPE_1__* pdev; int cfgopt; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int ,int ) ;
 char* FUNC_2 (char const*,int,int ) ;
 int FUNC_3 (struct nouveau_bios*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_4 (int ,char*,int*) ;
 TYPE_2__* FUNC_5 (struct nouveau_bios*) ;
 int FUNC_6 (struct nouveau_bios*,char*,...) ;
 int FUNC_7 (struct nouveau_bios*,char*,char*) ;
 int FUNC_8 (struct firmware const*) ;
 int FUNC_9 (struct firmware const**,char*,int *) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (struct nouveau_bios*) ;
 int FUNC_12 (struct nouveau_bios*) ;

__attribute__((used)) static int
FUNC_13(struct nouveau_bios *VAR_7)
{
 struct methods VAR_8[] = {



  { "PRAMIN", VAR_5, 1, 0, 0, ((void*)0) },
  { "PROM", VAR_6, 0, 0, 0, ((void*)0) },
  { "ACPI", VAR_2, 1, 0, 0, ((void*)0) },
  { "PCIROM", VAR_4, 1, 0, 0, ((void*)0) },
  {}
 };
 struct methods *VAR_9, *VAR_10;
 const struct firmware *VAR_11;
 const char *VAR_12;
 int VAR_13, VAR_14;
 char *VAR_15;

 VAR_12 = FUNC_4(FUNC_5(VAR_7)->cfgopt, "NvBios", &VAR_13);
 VAR_15 = VAR_12 ? FUNC_2(VAR_12, VAR_13, VAR_1) : ((void*)0);
 if (VAR_15) {

  VAR_9 = VAR_8;
  do {
   if (FUNC_10(VAR_15, VAR_9->desc))
    continue;
   FUNC_7(VAR_7, "source: %s\n", VAR_9->desc);

   VAR_9->shadow(VAR_7);
   VAR_9->score = FUNC_3(VAR_7, VAR_9->rw);
   if (VAR_9->score) {
    FUNC_0(VAR_15);
    return 0;
   }
  } while ((++VAR_9)->shadow);


  VAR_14 = FUNC_9(&VAR_11, VAR_15, &FUNC_5(VAR_7)->pdev->dev);
  if (VAR_14 == 0) {
   VAR_7->size = VAR_11->size;
   VAR_7->data = FUNC_1(VAR_11->data, VAR_11->size, VAR_1);
   FUNC_8(VAR_11);

   FUNC_7(VAR_7, "image: %s\n", VAR_15);
   if (FUNC_3(VAR_7, 1)) {
    FUNC_0(VAR_15);
    return 0;
   }

   FUNC_0(VAR_7->data);
   VAR_7->data = ((void*)0);
  }

  FUNC_6(VAR_7, "source \'%s\' invalid\n", VAR_15);
  FUNC_0(VAR_15);
 }

 VAR_9 = VAR_8;
 do {
  FUNC_7(VAR_7, "checking %s for image...\n", VAR_9->desc);
  VAR_9->shadow(VAR_7);
  VAR_9->score = FUNC_3(VAR_7, VAR_9->rw);
  VAR_9->size = VAR_7->size;
  VAR_9->data = VAR_7->data;
  VAR_7->data = ((void*)0);
 } while (VAR_9->score != 3 && (++VAR_9)->shadow);

 VAR_9 = VAR_8;
 VAR_10 = VAR_9;
 do {
  if (VAR_9->score > VAR_10->score) {
   FUNC_0(VAR_10->data);
   VAR_10 = VAR_9;
  }
 } while ((++VAR_9)->shadow);

 if (VAR_10->score) {
  FUNC_7(VAR_7, "using image from %s\n", VAR_10->desc);
  VAR_7->size = VAR_10->size;
  VAR_7->data = VAR_10->data;
  return 0;
 }

 FUNC_6(VAR_7, "unable to locate usable image\n");
 return -VAR_0;
}
