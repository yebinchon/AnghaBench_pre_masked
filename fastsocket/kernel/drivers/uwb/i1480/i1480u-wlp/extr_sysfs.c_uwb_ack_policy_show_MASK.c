
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_options {int def_tx_hdr; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int *) ;

ssize_t FUNC_2(const struct wlp_options *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n",
         FUNC_1(&VAR_0->def_tx_hdr));
}
