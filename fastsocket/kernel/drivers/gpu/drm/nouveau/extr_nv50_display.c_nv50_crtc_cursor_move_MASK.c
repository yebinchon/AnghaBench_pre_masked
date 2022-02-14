
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv50_curs {int dummy; } ;
struct nv50_chan {int user; } ;
struct drm_crtc {int dummy; } ;


 struct nv50_chan* FUNC_0 (struct nv50_curs*) ;
 struct nv50_curs* FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_crtc *VAR_0, int VAR_1, int VAR_2)
{
 struct nv50_curs *VAR_3 = FUNC_1(VAR_0);
 struct nv50_chan *VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_4->user, 0x0084, (VAR_2 << 16) | (VAR_1 & 0xffff));
 FUNC_2(VAR_4->user, 0x0080, 0x00000000);
 return 0;
}
