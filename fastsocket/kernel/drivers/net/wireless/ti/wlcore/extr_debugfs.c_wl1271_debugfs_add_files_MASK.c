
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int ,struct dentry*) ;
 int FUNC_1 (int ,int ,struct dentry*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_4 (char*,struct dentry*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static int FUNC_5(struct wl1271 *VAR_25,
        struct dentry *VAR_26)
{
 int VAR_27 = 0;
 struct dentry *VAR_28, *VAR_29;

 FUNC_0(VAR_23, VAR_26);
 FUNC_0(VAR_17, VAR_26);
 FUNC_0(VAR_8, VAR_26);

 FUNC_0(VAR_11, VAR_26);
 FUNC_0(VAR_21, VAR_26);
 FUNC_0(VAR_5, VAR_26);
 FUNC_0(VAR_24, VAR_26);
 FUNC_0(VAR_6, VAR_26);
 FUNC_0(VAR_22, VAR_26);
 FUNC_0(VAR_3, VAR_26);
 FUNC_0(VAR_2, VAR_26);
 FUNC_0(VAR_7, VAR_26);
 FUNC_0(VAR_9, VAR_26);
 FUNC_0(VAR_20, VAR_26);
 FUNC_0(VAR_14, VAR_26);
 FUNC_0(VAR_13, VAR_26);
 FUNC_0(VAR_15, VAR_26);
 FUNC_0(VAR_10, VAR_26);
 FUNC_0(VAR_19, VAR_26);

 VAR_29 = FUNC_4("rx_streaming", VAR_26);
 if (!VAR_29 || FUNC_2(VAR_29))
  goto err;

 FUNC_1(VAR_18, VAR_12, VAR_29);
 FUNC_1(VAR_18, VAR_1, VAR_29);

 FUNC_1(VAR_4, VAR_16, VAR_26);

 return 0;

err:
 if (FUNC_2(VAR_28))
  VAR_27 = FUNC_3(VAR_28);
 else
  VAR_27 = -VAR_0;

 return VAR_27;
}
