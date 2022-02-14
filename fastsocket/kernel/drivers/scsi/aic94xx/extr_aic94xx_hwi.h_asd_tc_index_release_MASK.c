
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_seq_data {int tc_index_bitmap; int ** tc_index_array; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct asd_seq_data *VAR_0, int VAR_1)
{
 VAR_0->tc_index_array[VAR_1] = ((void*)0);
 FUNC_0(VAR_1, VAR_0->tc_index_bitmap);
}
