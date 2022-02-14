
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_transfer {scalar_t__ ulnow; scalar_t__ dlnow; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct per_transfer *VAR_2)
{

  VAR_0 += VAR_2->dlnow;
  VAR_1 += VAR_2->ulnow;
}
