
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_io_client {scalar_t__ pool; int bios; } ;


 int VAR_0 ;
 struct dm_io_client* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct dm_io_client*) ;
 struct dm_io_client* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__) ;

struct dm_io_client *FUNC_6(void)
{
 struct dm_io_client *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->pool = FUNC_4(VAR_3, VAR_4);
 if (!VAR_5->pool)
  goto bad;

 VAR_5->bios = FUNC_1(VAR_2, 0);
 if (!VAR_5->bios)
  goto bad;

 return VAR_5;

   bad:
 if (VAR_5->pool)
  FUNC_5(VAR_5->pool);
 FUNC_2(VAR_5);
 return FUNC_0(-VAR_0);
}
