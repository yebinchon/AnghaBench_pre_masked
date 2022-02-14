
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* z_streamp ;
typedef scalar_t__ uInt ;
struct TYPE_6__ {int * read; int check; int (* checkfn ) (int ,int *,scalar_t__) ;int * write; int * window; int * end; } ;
typedef TYPE_2__ inflate_blocks_statef ;
struct TYPE_5__ {scalar_t__ avail_out; int * next_out; int adler; int total_out; } ;
typedef int Byte ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,scalar_t__) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__) ;

int FUNC_4(inflate_blocks_statef *VAR_2, z_streamp VAR_3, int VAR_4)
{
  uInt VAR_5;
  Byte *VAR_6;
  Byte *VAR_7;


  VAR_6 = VAR_3->next_out;
  VAR_7 = VAR_2->read;


  VAR_5 = (uInt)((VAR_7 <= VAR_2->write ? VAR_2->write : VAR_2->end) - VAR_7);
  if (VAR_5 > VAR_3->avail_out) VAR_5 = VAR_3->avail_out;
  if (VAR_5 && VAR_4 == VAR_0) VAR_4 = VAR_1;


  VAR_3->avail_out -= VAR_5;
  VAR_3->total_out += VAR_5;


  if (VAR_2->checkfn != FUNC_0)
    VAR_3->adler = VAR_2->check = (*VAR_2->checkfn)(VAR_2->check, VAR_7, VAR_5);


  FUNC_3(VAR_6, VAR_7, VAR_5);
  VAR_6 += VAR_5;
  VAR_7 += VAR_5;


  if (VAR_7 == VAR_2->end)
  {

    VAR_7 = VAR_2->window;
    if (VAR_2->write == VAR_2->end)
      VAR_2->write = VAR_2->window;


    VAR_5 = (uInt)(VAR_2->write - VAR_7);
    if (VAR_5 > VAR_3->avail_out) VAR_5 = VAR_3->avail_out;
    if (VAR_5 && VAR_4 == VAR_0) VAR_4 = VAR_1;


    VAR_3->avail_out -= VAR_5;
    VAR_3->total_out += VAR_5;


    if (VAR_2->checkfn != FUNC_0)
      VAR_3->adler = VAR_2->check = (*VAR_2->checkfn)(VAR_2->check, VAR_7, VAR_5);


    FUNC_3(VAR_6, VAR_7, VAR_5);
    VAR_6 += VAR_5;
    VAR_7 += VAR_5;
  }


  VAR_3->next_out = VAR_6;
  VAR_2->read = VAR_7;


  return VAR_4;
}
