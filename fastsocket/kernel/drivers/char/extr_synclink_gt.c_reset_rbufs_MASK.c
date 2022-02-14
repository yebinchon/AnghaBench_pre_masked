
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slgt_info {scalar_t__ rbuf_fill_count; scalar_t__ rbuf_fill_index; scalar_t__ rbuf_count; } ;


 int FUNC_0 (struct slgt_info*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct slgt_info *VAR_0)
{
 FUNC_0(VAR_0, 0, VAR_0->rbuf_count - 1);
 VAR_0->rbuf_fill_index = 0;
 VAR_0->rbuf_fill_count = 0;
}
