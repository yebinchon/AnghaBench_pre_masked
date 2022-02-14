
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct average {int pos; int sum; int init; } ;
typedef int s16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static s16 FUNC_1(struct average *VAR_1)
{
 if (!FUNC_0(VAR_1->init)) {
  if (VAR_1->pos)
   return VAR_1->sum / VAR_1->pos;
  return 0;
 }

 return VAR_1->sum / VAR_0;
}
