
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Seek; int Read; int Skip; int Look; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
typedef TYPE_2__ CLookToRead ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(CLookToRead *VAR_5, int VAR_6)
{
   VAR_5->s.Look = VAR_6 ?
      VAR_1 :
      VAR_0;
   VAR_5->s.Skip = VAR_4;
   VAR_5->s.Read = VAR_2;
   VAR_5->s.Seek = VAR_3;
}
