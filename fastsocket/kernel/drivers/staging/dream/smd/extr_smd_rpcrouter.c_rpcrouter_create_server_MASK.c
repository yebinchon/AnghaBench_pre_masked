
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rr_server {int list; scalar_t__ vers; scalar_t__ prog; scalar_t__ cid; scalar_t__ pid; } ;


 int VAR_0 ;
 struct rr_server* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rr_server*) ;
 struct rr_server* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rr_server*,int ,int) ;
 int FUNC_6 (struct rr_server*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static struct rr_server *FUNC_9(uint32_t VAR_5,
       uint32_t VAR_6,
       uint32_t VAR_7,
       uint32_t VAR_8)
{
 struct rr_server *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 VAR_9 = FUNC_2(sizeof(struct rr_server), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_5(VAR_9, 0, sizeof(struct rr_server));
 VAR_9->pid = VAR_5;
 VAR_9->cid = VAR_6;
 VAR_9->prog = VAR_7;
 VAR_9->vers = VAR_8;

 FUNC_7(&VAR_4, VAR_10);
 FUNC_3(&VAR_9->list, &VAR_3);
 FUNC_8(&VAR_4, VAR_10);

 if (VAR_5 == VAR_2) {
  VAR_11 = FUNC_6(VAR_9);
  if (VAR_11 < 0)
   goto out_fail;
 }
 return VAR_9;
out_fail:
 FUNC_7(&VAR_4, VAR_10);
 FUNC_4(&VAR_9->list);
 FUNC_8(&VAR_4, VAR_10);
 FUNC_1(VAR_9);
 return FUNC_0(VAR_11);
}
