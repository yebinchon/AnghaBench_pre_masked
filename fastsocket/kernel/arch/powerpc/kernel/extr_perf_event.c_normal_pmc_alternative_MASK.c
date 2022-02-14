
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int (* get_alternatives ) (int ,unsigned long,int *) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ,unsigned long,int *) ;

__attribute__((used)) static u64 FUNC_1(u64 VAR_4, unsigned long VAR_5)
{
 u64 VAR_6[VAR_0];
 int VAR_7;

 VAR_5 &= ~(VAR_1 | VAR_2);
 VAR_7 = VAR_3->get_alternatives(VAR_4, VAR_5, VAR_6);
 if (!VAR_7)
  return 0;
 return VAR_6[0];
}
