
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* buf_t ;
struct TYPE_4__ {int le_next; } ;
struct TYPE_5__ {int b_flags; TYPE_1__ b_vnbufs; void* b_wcred; void* b_rcred; int b_dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static __inline__ void
FUNC_1(buf_t VAR_4)
{
 FUNC_0((char *)VAR_4, sizeof *VAR_4);
 VAR_4->b_dev = VAR_2;
 VAR_4->b_rcred = VAR_1;
 VAR_4->b_wcred = VAR_1;
 VAR_4->b_vnbufs.le_next = VAR_3;
 VAR_4->b_flags = VAR_0;

 return;
}
