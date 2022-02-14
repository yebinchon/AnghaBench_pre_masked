
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_link*,int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ata_link*,unsigned long const*,unsigned long) ;
 int FUNC_3 (struct ata_link*,int ,int*) ;
 int FUNC_4 (struct ata_link*,int ,int) ;

int FUNC_5(struct ata_link *VAR_6, const unsigned long *VAR_7,
       unsigned long VAR_8)
{
 int VAR_9 = VAR_0;
 u32 VAR_10, VAR_11;
 int VAR_12;

 if ((VAR_12 = FUNC_3(VAR_6, VAR_4, &VAR_10)))
  return VAR_12;






 do {
  VAR_10 = (VAR_10 & 0x0f0) | 0x300;
  if ((VAR_12 = FUNC_4(VAR_6, VAR_4, VAR_10)))
   return VAR_12;





  FUNC_1(VAR_6->ap, 200);


  if ((VAR_12 = FUNC_3(VAR_6, VAR_4, &VAR_10)))
   return VAR_12;
 } while ((VAR_10 & 0xf0f) != 0x300 && --VAR_9);

 if ((VAR_10 & 0xf0f) != 0x300) {
  FUNC_0(VAR_6, VAR_2,
    "failed to resume link (SControl %X)\n",
    VAR_10);
  return 0;
 }

 if (VAR_9 < VAR_0)
  FUNC_0(VAR_6, VAR_3,
    "link resume succeeded after %d retries\n",
    VAR_0 - VAR_9);

 if ((VAR_12 = FUNC_2(VAR_6, VAR_7, VAR_8)))
  return VAR_12;


 if (!(VAR_12 = FUNC_3(VAR_6, VAR_5, &VAR_11)))
  VAR_12 = FUNC_4(VAR_6, VAR_5, VAR_11);

 return VAR_12 != -VAR_1 ? VAR_12 : 0;
}
