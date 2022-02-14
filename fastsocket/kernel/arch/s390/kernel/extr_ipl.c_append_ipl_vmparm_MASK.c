
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pbt; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 size_t FUNC_0 (char*,size_t,TYPE_2__*) ;

size_t FUNC_1(char *VAR_3, size_t VAR_4)
{
 size_t VAR_5;

 VAR_5 = 0;
 if (VAR_1 && (VAR_2.hdr.pbt == VAR_0))
  VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_2);
 else
  VAR_3[0] = 0;
 return VAR_5;
}
