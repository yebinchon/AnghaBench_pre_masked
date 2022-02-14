
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usblp {int sleeping; scalar_t__ used; scalar_t__ bidir; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usblp*) ;

__attribute__((used)) static int FUNC_1 (struct usblp *VAR_1)
{
 if (VAR_1->bidir && VAR_1->used && !VAR_1->sleeping) {
  if (FUNC_0(VAR_1) < 0)
   return -VAR_0;
 }
 return 0;
}
