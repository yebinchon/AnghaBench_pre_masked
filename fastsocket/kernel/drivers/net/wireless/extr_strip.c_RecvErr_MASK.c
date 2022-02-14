
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strip {int sx_count; int rx_errors; int * sx_buff; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct strip*,int *,int *) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, struct strip *VAR_1)
{
 __u8 *VAR_2 = VAR_1->sx_buff;
 __u8 *VAR_3 = VAR_1->sx_buff + VAR_1->sx_count;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_1->rx_errors++;
}
