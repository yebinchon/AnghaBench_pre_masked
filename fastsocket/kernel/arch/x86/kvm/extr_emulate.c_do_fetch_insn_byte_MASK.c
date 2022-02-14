
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct x86_emulate_ops {int (* fetch ) (unsigned long,int *,int,int ,int *) ;} ;
struct fetch_cache {unsigned long start; unsigned long end; int * data; } ;
struct TYPE_2__ {struct fetch_cache fetch; } ;
struct x86_emulate_ctxt {int vcpu; TYPE_1__ decode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int *,int,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct x86_emulate_ctxt *VAR_2,
         struct x86_emulate_ops *VAR_3,
         unsigned long VAR_4, u8 *VAR_5)
{
 struct fetch_cache *VAR_6 = &VAR_2->decode.fetch;
 int VAR_7;
 int VAR_8;

 if (VAR_4 < VAR_6->start || VAR_4 >= VAR_6->end) {
  VAR_8 = FUNC_0(15UL, VAR_0 - FUNC_1(VAR_4));
  VAR_7 = VAR_3->fetch(VAR_4, VAR_6->data, VAR_8, VAR_2->vcpu, ((void*)0));
  if (VAR_7 != VAR_1)
   return VAR_7;
  VAR_6->start = VAR_4;
  VAR_6->end = VAR_4 + VAR_8;
 }
 *VAR_5 = VAR_6->data[VAR_4 - VAR_6->start];
 return VAR_1;
}
