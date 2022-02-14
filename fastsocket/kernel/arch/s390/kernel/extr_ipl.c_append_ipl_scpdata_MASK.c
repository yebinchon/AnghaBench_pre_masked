
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pbt; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 size_t FUNC_0 (char*,size_t,TYPE_2__*) ;

size_t FUNC_1(char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 VAR_4 = 0;
 if (VAR_1.hdr.pbt == VAR_0)
  VAR_4 = FUNC_0(VAR_2, VAR_3, &VAR_1);
 else
  VAR_2[0] = 0;
 return VAR_4;
}
