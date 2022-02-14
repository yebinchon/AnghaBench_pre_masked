
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_dvb_frontends {int lock; int felist; } ;
struct TYPE_2__ {int lock; } ;
struct videobuf_dvb_frontend {int id; int felist; TYPE_1__ dvb; } ;


 int VAR_0 ;
 struct videobuf_dvb_frontend* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct videobuf_dvb_frontend *FUNC_5(
 struct videobuf_dvb_frontends *VAR_1, int VAR_2)
{
 struct videobuf_dvb_frontend *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct videobuf_dvb_frontend), VAR_0);
 if (VAR_3 == ((void*)0))
  goto fail_alloc;

 VAR_3->id = VAR_2;
 FUNC_2(&VAR_3->dvb.lock);

 FUNC_3(&VAR_1->lock);
 FUNC_1(&VAR_3->felist, &VAR_1->felist);
 FUNC_4(&VAR_1->lock);

fail_alloc:
 return VAR_3;
}
