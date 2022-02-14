
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {scalar_t__ frag_threshold; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct wl1271 {TYPE_2__ conf; } ;
struct acx_frag_threshold {int frag_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acx_frag_threshold*) ;
 struct acx_frag_threshold* FUNC_2 (int,int ) ;
 int FUNC_3 (struct wl1271*,int ,struct acx_frag_threshold*,int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (char*,int) ;

int FUNC_6(struct wl1271 *VAR_5, u32 VAR_6)
{
 struct acx_frag_threshold *VAR_7;
 int VAR_8 = 0;





 if (VAR_6 > VAR_4)
  VAR_6 = VAR_5->conf.tx.frag_threshold;

 FUNC_4(VAR_1, "acx frag threshold: %d", VAR_6);

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_3);

 if (!VAR_7) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_7->frag_threshold = FUNC_0((u16)VAR_6);
 VAR_8 = FUNC_3(VAR_5, VAR_0, VAR_7, sizeof(*VAR_7));
 if (VAR_8 < 0) {
  FUNC_5("Setting of frag threshold failed: %d", VAR_8);
  goto out;
 }

out:
 FUNC_1(VAR_7);
 return VAR_8;
}
