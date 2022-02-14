
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_sm {scalar_t__ pairwise_cipher; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(const struct wpa_sm *VAR_2,
                        int VAR_3)
{
    if (VAR_3 && VAR_2->pairwise_cipher != VAR_1) {
        return 0;
    }
    return VAR_3;
}
