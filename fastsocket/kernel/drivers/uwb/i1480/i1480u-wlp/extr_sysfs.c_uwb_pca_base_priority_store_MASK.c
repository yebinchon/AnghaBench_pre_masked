
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wlp_options {int pca_base_priority; int def_tx_hdr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

ssize_t FUNC_3(struct wlp_options *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 ssize_t VAR_5 = -VAR_0;
 u8 VAR_6;

 VAR_5 = FUNC_0(VAR_3, "%hhu\n", &VAR_6);
 if (VAR_5 != 1) {
  VAR_5 = -VAR_0;
  goto out;
 }
 VAR_5 = -VAR_0;
 if (VAR_6 >= 8)
  goto out;
 VAR_2->pca_base_priority = VAR_6;

 if (VAR_5 >= 0 && (FUNC_1(&VAR_2->def_tx_hdr) & VAR_1) == 0)
  FUNC_2(&VAR_2->def_tx_hdr, VAR_2->pca_base_priority);
 VAR_5 = 0;
out:
 return VAR_5 < 0 ? VAR_5 : VAR_4;
}
