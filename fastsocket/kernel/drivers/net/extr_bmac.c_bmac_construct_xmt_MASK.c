
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned long len; void* data; } ;
struct dbdma_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dbdma_cmd volatile*,int,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_1 (void*) ;

__attribute__((used)) static void
FUNC_2(struct sk_buff *VAR_3, volatile struct dbdma_cmd *VAR_4)
{
 void *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 VAR_7 = VAR_3->len;
 VAR_5 = VAR_3->data;
 VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_4, (VAR_1 | VAR_0 | VAR_2), VAR_7, VAR_6, 0);
}
