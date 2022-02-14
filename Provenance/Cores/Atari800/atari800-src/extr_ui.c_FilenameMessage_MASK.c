
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int msg ;
struct TYPE_2__ {int (* fMessage ) (char*,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,char const*,char const*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2, const char *VAR_3)
{
 char VAR_4[VAR_0 + 30];
 FUNC_0(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);
 VAR_1->fMessage(VAR_4, 1);
}
