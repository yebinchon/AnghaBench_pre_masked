
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* frame; } ;
struct s2255_channel {TYPE_1__ buffer; } ;
struct TYPE_4__ {int * lpvbits; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct s2255_channel *VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(1, "release sys buffers\n");
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->buffer.frame[VAR_2].lpvbits) {
   FUNC_0(1, "vfree %p\n",
    VAR_1->buffer.frame[VAR_2].lpvbits);
   FUNC_1(VAR_1->buffer.frame[VAR_2].lpvbits);
  }
  VAR_1->buffer.frame[VAR_2].lpvbits = ((void*)0);
 }
 return 0;
}
