
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_options {int def_tx_hdr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 int FUNC_1 (int *,unsigned int) ;

ssize_t FUNC_2(struct wlp_options *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5;
 unsigned VAR_6;

 VAR_5 = FUNC_0(VAR_3, "%u\n", &VAR_6);
 if (VAR_5 != 1 || VAR_6 > VAR_1) {
  VAR_5 = -VAR_0;
  goto out;
 }
 FUNC_1(&VAR_2->def_tx_hdr, VAR_6);
 VAR_5 = 0;
out:
 return VAR_5 < 0 ? VAR_5 : VAR_4;
}
