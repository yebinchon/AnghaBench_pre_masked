
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct drm_clip_rect {int dummy; } ;
struct drm_buf {int dummy; } ;
struct TYPE_19__ {int (* emit_clip_rect ) (TYPE_3__*,struct drm_clip_rect const*) ;} ;
typedef TYPE_3__ drm_savage_private_t ;
struct TYPE_18__ {int cmd; } ;
struct TYPE_17__ {int count; } ;
struct TYPE_20__ {TYPE_2__ cmd; TYPE_1__ idx; } ;
typedef TYPE_4__ drm_savage_cmd_header_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;




 int FUNC_1 (TYPE_3__*,TYPE_4__*,int const*,struct drm_buf const*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,struct drm_buf const*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int const*,int const*,unsigned int,unsigned int) ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,unsigned int const*,unsigned int,unsigned int) ;
 int FUNC_5 (TYPE_3__*,struct drm_clip_rect const*) ;

__attribute__((used)) static int FUNC_6(drm_savage_private_t * VAR_1,
    const drm_savage_cmd_header_t *VAR_2,
    const drm_savage_cmd_header_t *VAR_3,
    const struct drm_buf * VAR_4,
    const unsigned int *VAR_5,
    unsigned int VAR_6, unsigned int VAR_7,
    unsigned int VAR_8,
    const struct drm_clip_rect *VAR_9)
{
 unsigned int VAR_10, VAR_11;
 int VAR_12;

 for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10) {
  const drm_savage_cmd_header_t *VAR_13;
  VAR_1->emit_clip_rect(VAR_1, &VAR_9[VAR_10]);

  VAR_13 = VAR_2;
  while (VAR_13 < VAR_3) {
   drm_savage_cmd_header_t VAR_14;
   VAR_14 = *VAR_13;
   VAR_13++;
   switch (VAR_14.cmd.cmd) {
   case 130:
    VAR_12 = FUNC_2(
     VAR_1, &VAR_14, VAR_4);
    break;
   case 128:
    VAR_12 = FUNC_4(
     VAR_1, &VAR_14,
     VAR_5, VAR_6, VAR_7);
    break;
   case 131:
    VAR_11 = (VAR_14.idx.count + 3) / 4;

    VAR_12 = FUNC_1(VAR_1,
     &VAR_14, (const uint16_t *)VAR_13,
     VAR_4);
    VAR_13 += VAR_11;
    break;
   case 129:
    VAR_11 = (VAR_14.idx.count + 3) / 4;

    VAR_12 = FUNC_3(VAR_1,
     &VAR_14, (const uint16_t *)VAR_13,
     (const uint32_t *)VAR_5, VAR_6,
     VAR_7);
    VAR_13 += VAR_11;
    break;
   default:

    FUNC_0("IMPLEMENTATION ERROR: "
       "non-drawing-command %d\n",
       VAR_14.cmd.cmd);
    return -VAR_0;
   }

   if (VAR_12 != 0)
    return VAR_12;
  }
 }

 return 0;
}
