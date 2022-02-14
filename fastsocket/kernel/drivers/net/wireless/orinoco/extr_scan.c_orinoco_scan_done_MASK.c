
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int * scan_request; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct orinoco_private *VAR_0, bool VAR_1)
{
 if (VAR_0->scan_request) {
  FUNC_0(VAR_0->scan_request, VAR_1);
  VAR_0->scan_request = ((void*)0);
 }
}
