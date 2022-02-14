
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* read ) (TYPE_1__*,unsigned char*,int) ;} ;
typedef TYPE_1__ FFFILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(FFFILE *VAR_1)
{
    unsigned char VAR_2;
    if (!FUNC_0(VAR_1) && VAR_1->read(VAR_1, &VAR_2, 1)==1) return VAR_2;
    return VAR_0;
}
