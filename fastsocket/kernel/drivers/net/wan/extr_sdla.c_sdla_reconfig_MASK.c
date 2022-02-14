
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct frad_local {int config; scalar_t__* dlci; } ;
struct frad_conf {int dummy; } ;
struct conf_data {scalar_t__* dlci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct conf_data*,int *,int) ;
 struct frad_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ,int ,struct conf_data*,int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 struct frad_local *VAR_5;
 struct conf_data VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_1(VAR_4);

 VAR_8 = 0;
 for(VAR_7=0;VAR_7<VAR_0;VAR_7++)
  if (VAR_5->dlci[VAR_7])
   VAR_6.dlci[VAR_8++] = VAR_5->dlci[VAR_7];
 VAR_8 *= 2;

 FUNC_0(&VAR_6, &VAR_5->config, sizeof(struct frad_conf));
 VAR_8 += sizeof(struct frad_conf);

 FUNC_2(VAR_4, VAR_1, 0, 0, ((void*)0), 0, ((void*)0), ((void*)0));
 FUNC_2(VAR_4, VAR_3, 0, 0, &VAR_6, VAR_8, ((void*)0), ((void*)0));
 FUNC_2(VAR_4, VAR_2, 0, 0, ((void*)0), 0, ((void*)0), ((void*)0));

 return(0);
}
