
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sclp_buffer {scalar_t__ current_length; int * current_line; TYPE_2__* sccb; } ;
struct mto {int dummy; } ;
struct TYPE_3__ {int length; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;

int
FUNC_0(struct sclp_buffer *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0 - VAR_1->sccb->header.length;
 if (VAR_1->current_line != ((void*)0))
  VAR_2 -= sizeof(struct mto) + VAR_1->current_length;
 return VAR_2;
}
