
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long,unsigned long const) ;
 int FUNC_1 (int ,unsigned long) ;
 unsigned long VAR_2 ;
 int FUNC_2 (struct ata_link*,int ,int*) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct ata_link *VAR_3, const unsigned long *VAR_4,
         unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_4[0];
 unsigned long VAR_7 = VAR_4[1];
 unsigned long VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_9 = FUNC_0(VAR_2, VAR_4[2]);
 if (FUNC_4(VAR_9, VAR_5))
  VAR_5 = VAR_9;

 if ((VAR_12 = FUNC_2(VAR_3, VAR_1, &VAR_11)))
  return VAR_12;
 VAR_11 &= 0xf;

 VAR_10 = VAR_11;
 VAR_8 = VAR_2;

 while (1) {
  FUNC_1(VAR_3->ap, VAR_6);
  if ((VAR_12 = FUNC_2(VAR_3, VAR_1, &VAR_11)))
   return VAR_12;
  VAR_11 &= 0xf;


  if (VAR_11 == VAR_10) {
   if (VAR_11 == 1 && FUNC_4(VAR_2, VAR_5))
    continue;
   if (FUNC_3(VAR_2,
           FUNC_0(VAR_8, VAR_7)))
    return 0;
   continue;
  }


  VAR_10 = VAR_11;
  VAR_8 = VAR_2;




  if (FUNC_3(VAR_2, VAR_5))
   return -VAR_0;
 }
}
