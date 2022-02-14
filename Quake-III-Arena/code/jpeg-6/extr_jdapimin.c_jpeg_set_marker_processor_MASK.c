
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* jpeg_marker_parser_method ;
typedef TYPE_2__* j_decompress_ptr ;
struct TYPE_6__ {TYPE_1__* marker; } ;
struct TYPE_5__ {void** process_APPn; void* process_COM; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_1 (j_decompress_ptr VAR_3, int VAR_4,
      jpeg_marker_parser_method VAR_5)
{
  if (VAR_4 == VAR_2)
    VAR_3->marker->process_COM = VAR_5;
  else if (VAR_4 >= VAR_1 && VAR_4 <= VAR_1+15)
    VAR_3->marker->process_APPn[VAR_4-VAR_1] = VAR_5;
  else
    FUNC_0(VAR_3, VAR_0, VAR_4);
}
