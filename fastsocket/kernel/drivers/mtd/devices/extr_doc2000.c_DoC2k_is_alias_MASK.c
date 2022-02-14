
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct DiskOnChip {scalar_t__ physadr; int virtadr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct DiskOnChip *VAR_1, struct DiskOnChip *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 if (VAR_1->physadr == VAR_2->physadr)
  return 1;






 VAR_3 = FUNC_0(VAR_1->virtadr, VAR_0);
 VAR_4 = FUNC_0(VAR_2->virtadr, VAR_0);
 if (VAR_3 != VAR_4)
  return 0;

 FUNC_1((VAR_3 + 1) % 0xff, VAR_1->virtadr, VAR_0);
 VAR_4 = FUNC_0(VAR_2->virtadr, VAR_0);
 if (VAR_4 == (VAR_3 + 1) % 0xff)
  VAR_5 = 1;
 else
  VAR_5 = 0;



 FUNC_1(VAR_3, VAR_1->virtadr, VAR_0);

 return VAR_5;
}
