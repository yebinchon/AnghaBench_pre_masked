
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int flags; int uid; void* aname; void* uname; struct p9_fid* clnt; scalar_t__ maxdata; int dfltgid; int dfltuid; int slist; } ;
struct p9_fid {int uid; scalar_t__ msize; int dotu; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct p9_fid* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct p9_fid*) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct p9_fid*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_4 () ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int *,int *) ;
 struct p9_fid* FUNC_7 (struct p9_fid*,int *,void*,int ,void*) ;
 struct p9_fid* FUNC_8 (char const*,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (void*,int ) ;
 int FUNC_12 (struct v9fs_session_info*) ;
 int FUNC_13 (struct v9fs_session_info*) ;
 int FUNC_14 (struct v9fs_session_info*,char*) ;
 int VAR_13 ;
 int VAR_14 ;

struct p9_fid *FUNC_15(struct v9fs_session_info *VAR_15,
    const char *VAR_16, char *VAR_17)
{
 int VAR_18 = -VAR_0;
 struct p9_fid *VAR_19;
 int VAR_20;

 VAR_15->uname = FUNC_4();
 if (!VAR_15->uname)
  return FUNC_0(-VAR_1);

 VAR_15->aname = FUNC_4();
 if (!VAR_15->aname) {
  FUNC_5(VAR_15->uname);
  return FUNC_0(-VAR_1);
 }

 FUNC_9(&VAR_14);
 FUNC_6(&VAR_15->slist, &VAR_13);
 FUNC_10(&VAR_14);

 VAR_15->flags = VAR_12 | VAR_7;
 FUNC_11(VAR_15->uname, VAR_11);
 FUNC_11(VAR_15->aname, VAR_8);
 VAR_15->uid = ~0;
 VAR_15->dfltuid = VAR_10;
 VAR_15->dfltgid = VAR_9;

 VAR_20 = FUNC_14(VAR_15, VAR_17);
 if (VAR_20 < 0) {
  VAR_18 = VAR_20;
  goto error;
 }

 VAR_15->clnt = FUNC_8(VAR_16, VAR_17);
 if (FUNC_1(VAR_15->clnt)) {
  VAR_18 = FUNC_3(VAR_15->clnt);
  VAR_15->clnt = ((void*)0);
  FUNC_2(VAR_2, "problem initializing 9p client\n");
  goto error;
 }

 if (!VAR_15->clnt->dotu)
  VAR_15->flags &= ~VAR_12;

 VAR_15->maxdata = VAR_15->clnt->msize - VAR_3;


 if (!FUNC_13(VAR_15) &&
  ((VAR_15->flags&VAR_5) == VAR_7)) {

  VAR_15->flags &= ~VAR_5;
  VAR_15->flags |= VAR_4;
  VAR_15->uid = ~0;
 }

 VAR_19 = FUNC_7(VAR_15->clnt, ((void*)0), VAR_15->uname, ~0,
       VAR_15->aname);
 if (FUNC_1(VAR_19)) {
  VAR_18 = FUNC_3(VAR_19);
  VAR_19 = ((void*)0);
  FUNC_2(VAR_2, "cannot attach\n");
  goto error;
 }

 if ((VAR_15->flags & VAR_5) == VAR_6)
  VAR_19->uid = VAR_15->uid;
 else
  VAR_19->uid = ~0;






 return VAR_19;

error:
 return FUNC_0(VAR_18);
}
