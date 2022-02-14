
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* gz_statep ;
struct TYPE_6__ {scalar_t__ avail_in; } ;
struct TYPE_7__ {scalar_t__ pos; scalar_t__ have; } ;
struct TYPE_8__ {scalar_t__ mode; TYPE_1__ strm; TYPE_2__ x; scalar_t__ seek; int how; scalar_t__ past; scalar_t__ eof; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int *) ;

__attribute__((used)) static void FUNC_1(gz_statep VAR_3)
{
   VAR_3->x.have = 0;
   if (VAR_3->mode == VAR_0) {
      VAR_3->eof = 0;
      VAR_3->past = 0;
      VAR_3->how = VAR_1;
   }
   VAR_3->seek = 0;
   FUNC_0(VAR_3, VAR_2, ((void*)0));
   VAR_3->x.pos = 0;
   VAR_3->strm.avail_in = 0;
}
