
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {unsigned short buf_ptr; unsigned char buf_base; } ;
struct TYPE_10__ {scalar_t__ virt_addr; } ;
struct TYPE_9__ {TYPE_1__** port_array; scalar_t__ memory_base; } ;
struct TYPE_8__ {unsigned long last_mem_alloc; } ;
typedef TYPE_2__ SLMP_INFO ;
typedef TYPE_3__ SCADESC_EX ;
typedef TYPE_4__ SCADESC ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(SLMP_INFO *VAR_1, SCADESC *VAR_2,SCADESC_EX *VAR_3,int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 for ( VAR_5 = 0; VAR_5 < VAR_4; VAR_5++ ) {
  VAR_3[VAR_5].virt_addr = VAR_1->memory_base + VAR_1->port_array[0]->last_mem_alloc;
  VAR_6 = VAR_1->port_array[0]->last_mem_alloc;
  VAR_1->port_array[0]->last_mem_alloc += VAR_0;

  VAR_2[VAR_5].buf_ptr = (unsigned short)VAR_6;
  VAR_2[VAR_5].buf_base = (unsigned char)(VAR_6 >> 16);
 }

 return 0;
}
