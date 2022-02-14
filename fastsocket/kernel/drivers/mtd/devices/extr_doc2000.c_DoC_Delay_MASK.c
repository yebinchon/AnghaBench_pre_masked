
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DiskOnChip {int virtadr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct DiskOnChip*) ;
 int VAR_1 ;
 char FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct DiskOnChip *VAR_2, unsigned short VAR_3)
{
 volatile char VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (FUNC_0(VAR_2))
   VAR_4 = FUNC_1(VAR_2->virtadr, VAR_1);
  else
   VAR_4 = FUNC_1(VAR_2->virtadr, VAR_0);
 }

}
