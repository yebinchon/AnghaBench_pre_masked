
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int init_str; } ;
struct chan_opts {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (struct line*,unsigned int,char*,char**) ;
 int FUNC_2 (int ,struct line*,int,struct chan_opts const*,char**) ;

int FUNC_3(struct line *VAR_3, unsigned int VAR_4, char *VAR_5,
  const struct chan_opts *VAR_6, char **VAR_7)
{
 struct line *VAR_8;
 char *VAR_9;
 int VAR_10;

 if (*VAR_5 == '=') {
  *VAR_7 = "Can't configure all devices from mconsole";
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_2);
 if (VAR_9 == ((void*)0)) {
  *VAR_7 = "Failed to allocate memory";
  return -VAR_1;
 }
 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_9, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8 = &VAR_3[VAR_10];
 return FUNC_2(VAR_8->init_str, VAR_8, VAR_10, VAR_6, VAR_7);
}
