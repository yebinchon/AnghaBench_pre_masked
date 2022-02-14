
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_backend {int dummy; } ;
struct firedtv {int isochannel; int voltage; int tone; int type; int remote_ctrl_work; int demux_mutex; int avc_wait; int avc_mutex; struct firedtv_backend const* backend; struct device* device; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,struct firedtv*) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 struct firedtv* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,int ,size_t) ;

struct firedtv *FUNC_8(struct device *VAR_3,
      const struct firedtv_backend *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct firedtv *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 FUNC_2(VAR_3, VAR_7);
 VAR_7->device = VAR_3;
 VAR_7->isochannel = -1;
 VAR_7->voltage = 0xff;
 VAR_7->tone = 0xff;
 VAR_7->backend = VAR_4;

 FUNC_5(&VAR_7->avc_mutex);
 FUNC_3(&VAR_7->avc_wait);
 FUNC_5(&VAR_7->demux_mutex);
 FUNC_1(&VAR_7->remote_ctrl_work, VAR_1);

 for (VAR_8 = FUNC_0(VAR_2); --VAR_8; )
  if (FUNC_6(VAR_2[VAR_8]) <= VAR_6 &&
      FUNC_7(VAR_5, VAR_2[VAR_8], VAR_6) == 0)
   break;
 VAR_7->type = VAR_8;

 return VAR_7;
}
