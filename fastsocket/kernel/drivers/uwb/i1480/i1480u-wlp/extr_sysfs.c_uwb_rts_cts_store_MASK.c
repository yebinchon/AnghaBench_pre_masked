
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_options {int def_tx_hdr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 int FUNC_1 (int *,int) ;

ssize_t FUNC_2(struct wlp_options *VAR_1,
     const char *VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 unsigned VAR_5;

 VAR_4 = FUNC_0(VAR_2, "%u\n", &VAR_5);
 if (VAR_4 != 1) {
  VAR_4 = -VAR_0;
  goto out;
 }
 VAR_4 = -VAR_0;
 FUNC_1(&VAR_1->def_tx_hdr, !!VAR_5);
 VAR_4 = 0;
out:
 return VAR_4 < 0 ? VAR_4 : VAR_3;
}
