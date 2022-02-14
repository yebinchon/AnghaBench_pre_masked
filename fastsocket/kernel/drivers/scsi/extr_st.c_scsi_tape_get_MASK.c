
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_tape {int kref; int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 struct scsi_tape** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct scsi_tape *FUNC_7(int VAR_5)
{
 struct scsi_tape *VAR_6 = ((void*)0);

 FUNC_2(&VAR_4);
 FUNC_5(&VAR_2);

 if (VAR_5 < VAR_3 && VAR_1 != ((void*)0))
  VAR_6 = VAR_1[VAR_5];
 if (!VAR_6) goto out;

 FUNC_0(&VAR_6->kref);

 if (!VAR_6->device)
  goto out_put;

 if (FUNC_4(VAR_6->device))
  goto out_put;

 goto out;

out_put:
 FUNC_1(&VAR_6->kref, VAR_0);
 VAR_6 = ((void*)0);
out:
 FUNC_6(&VAR_2);
 FUNC_3(&VAR_4);
 return VAR_6;
}
