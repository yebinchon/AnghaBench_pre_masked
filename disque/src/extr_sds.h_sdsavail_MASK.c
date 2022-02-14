
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char* sds ;
struct TYPE_2__ {size_t alloc; size_t len; } ;


 int FUNC_0 (int,unsigned char* const) ;





 unsigned char VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline size_t FUNC_1(const sds VAR_2) {
    unsigned char VAR_3 = VAR_2[-1];
    switch(VAR_3&VAR_0) {
        case 130: {
            return 0;
        }
        case 128: {
            FUNC_0(8,VAR_2);
            return VAR_1->alloc - VAR_1->len;
        }
        case 132: {
            FUNC_0(16,VAR_2);
            return VAR_1->alloc - VAR_1->len;
        }
        case 131: {
            FUNC_0(32,VAR_2);
            return VAR_1->alloc - VAR_1->len;
        }
        case 129: {
            FUNC_0(64,VAR_2);
            return VAR_1->alloc - VAR_1->len;
        }
    }
    return 0;
}
