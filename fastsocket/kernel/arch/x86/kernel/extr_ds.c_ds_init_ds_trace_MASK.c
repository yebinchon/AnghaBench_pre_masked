
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ds_trace {size_t n; size_t size; unsigned int flags; void* ith; void* end; void* begin; void* top; } ;
typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;
struct TYPE_2__ {size_t* sizeof_rec; } ;


 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ds_trace *VAR_2, enum ds_qualifier VAR_3,
        void *VAR_4, size_t VAR_5, size_t VAR_6,
        unsigned int VAR_7) {
 unsigned long VAR_8, VAR_9;
 VAR_8 = (unsigned long)VAR_4;

 VAR_9 = FUNC_0(VAR_8, VAR_0) - VAR_8;
 VAR_8 += VAR_9;
 VAR_5 -= VAR_9;

 VAR_2->n = VAR_5 / VAR_1.sizeof_rec[VAR_3];
 VAR_2->size = VAR_1.sizeof_rec[VAR_3];

 VAR_5 = (VAR_2->n * VAR_2->size);

 VAR_2->begin = (void *)VAR_8;
 VAR_2->top = VAR_2->begin;
 VAR_2->end = (void *)(VAR_8 + VAR_5);




 VAR_6 *= VAR_1.sizeof_rec[VAR_3];
 VAR_2->ith = (void *)(VAR_8 + VAR_5 - VAR_6);

 VAR_2->flags = VAR_7;
}
