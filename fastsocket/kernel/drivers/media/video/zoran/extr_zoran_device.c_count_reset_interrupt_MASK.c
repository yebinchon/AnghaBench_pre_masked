
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zoran {int intr_counter_JPEGRepIRQ; int intr_counter_CodRepIRQ; int intr_counter_GIRQ0; int intr_counter_GIRQ1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static u32
FUNC_2 (struct zoran *VAR_5)
{
 u32 VAR_6;

 if ((VAR_6 = FUNC_0(VAR_0) & 0x78000000)) {
  if (VAR_6 & VAR_3) {
   FUNC_1(VAR_3, VAR_0);
   VAR_5->intr_counter_GIRQ1++;
  }
  if (VAR_6 & VAR_2) {
   FUNC_1(VAR_2, VAR_0);
   VAR_5->intr_counter_GIRQ0++;
  }
  if (VAR_6 & VAR_1) {
   FUNC_1(VAR_1, VAR_0);
   VAR_5->intr_counter_CodRepIRQ++;
  }
  if (VAR_6 & VAR_4) {
   FUNC_1(VAR_4, VAR_0);
   VAR_5->intr_counter_JPEGRepIRQ++;
  }
 }
 return VAR_6;
}
