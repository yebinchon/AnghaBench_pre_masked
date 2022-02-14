
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tty {unsigned int tx_bytes_queued; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0,
        unsigned int VAR_1)
{
 struct ipw_tty *VAR_2 = VAR_0;





 VAR_2->tx_bytes_queued -= VAR_1;
}
