
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct representation {int input; int init_sec_data_len; scalar_t__ n_fragments; } ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int64_t FUNC_2(void *VAR_1, int64_t VAR_2, int VAR_3)
{
    struct representation *VAR_4 = VAR_1;
    if (VAR_4->n_fragments && !VAR_4->init_sec_data_len) {
        return FUNC_1(VAR_4->input, VAR_2, VAR_3);
    }

    return FUNC_0(VAR_0);
}
