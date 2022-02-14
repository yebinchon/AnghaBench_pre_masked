
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct audio {scalar_t__ fill_next; scalar_t__ read_next; scalar_t__ buf_refresh; TYPE_1__* in; } ;
struct TYPE_2__ {scalar_t__ used; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct audio *VAR_1)
{
 uint8_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->in[VAR_2].used = 0;
 VAR_1->buf_refresh = 0;
 VAR_1->read_next = 0;
 VAR_1->fill_next = 0;
}
