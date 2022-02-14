
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* j_compress_ptr ;
struct TYPE_7__ {scalar_t__ next_scanline; scalar_t__ global_state; TYPE_1__* marker; } ;
struct TYPE_6__ {int (* write_any_marker ) (TYPE_2__*,int,int const*,unsigned int) ;} ;
typedef int JOCTET ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int,int const*,unsigned int) ;

void
FUNC_2 (j_compress_ptr VAR_4, int VAR_5,
     const JOCTET *VAR_6, unsigned int VAR_7)
{
  if (VAR_4->next_scanline != 0 ||
      (VAR_4->global_state != VAR_1 &&
       VAR_4->global_state != VAR_0 &&
       VAR_4->global_state != VAR_2))
    FUNC_0(VAR_4, VAR_3, VAR_4->global_state);

  (*VAR_4->marker->write_any_marker) (VAR_4, VAR_5, VAR_6, VAR_7);
}
