
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* outputb ) (TYPE_1__*,int ,int) ;} ;
struct smi_info {TYPE_1__ io; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct smi_info *VAR_5 = VAR_4;

 VAR_5->io.outputb(&VAR_5->io, VAR_2,
        VAR_0
        | VAR_1);
 return FUNC_0(VAR_3, VAR_4);
}
