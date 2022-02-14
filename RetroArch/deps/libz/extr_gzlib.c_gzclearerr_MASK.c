
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gz_statep ;
typedef int * gzFile ;
struct TYPE_3__ {scalar_t__ mode; scalar_t__ past; scalar_t__ eof; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int *) ;

void FUNC_1(gzFile VAR_3)
{
   gz_statep VAR_4;


   if (VAR_3 == ((void*)0))
      return;
   VAR_4 = (gz_statep)VAR_3;
   if (VAR_4->mode != VAR_0 && VAR_4->mode != VAR_1)
      return;


   if (VAR_4->mode == VAR_0) {
      VAR_4->eof = 0;
      VAR_4->past = 0;
   }
   FUNC_0(VAR_4, VAR_2, ((void*)0));
}
