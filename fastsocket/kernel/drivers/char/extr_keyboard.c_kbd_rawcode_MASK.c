
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_5__ {scalar_t__ kbdmode; } ;
struct TYPE_4__ {struct vc_data* d; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (struct vc_data*,unsigned char) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void FUNC_1(unsigned char VAR_5)
{
 struct vc_data *VAR_6 = VAR_4[VAR_1].d;
 VAR_2 = VAR_3 + VAR_1;
 if (VAR_2->kbdmode == VAR_0)
  FUNC_0(VAR_6, VAR_5);
}
